#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#ifdef __OBJC__
#import "SSAccountStore.h"
#import "SSMutableAuthenticationContext.h"
#import "SSAuthenticateRequest.h"
#endif
#pragma clang diagnostic pop

%hook PreferencesAppController
%new(v)
- (void)signin:(NSString*)appleid password:(NSString*)passwd{
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wdeprecated-declarations"

	//[%c(StaticLibTest) msgal];
	SSAccountStore *currentAccounts = [SSAccountStore defaultStore];
	[currentAccounts signOutAllAccounts];
	
	SSAuthenticationContext *Context = [SSAuthenticationContext contextForSignIn];
    SSMutableAuthenticationContext *AuthContext = [Context mutableCopy];
    
    [AuthContext setDemoAccount:true];
    [AuthContext setAccountName:appleid];
    [AuthContext setInitialPassword:passwd];
    //[AuthContext setPreferredITunesStoreClient:appleid];
    
    SSAuthenticateRequest *SigninReq = [[SSAuthenticateRequest alloc]initWithAuthenticationContext:AuthContext];
    if([SigninReq start])
        NSLog(@"Sign in Successfully");
    else
        NSLog(@"Failed");
	
	#pragma clang diagnostic pop
}
%end

%hook PreferencesAppController
%new(v)
- (void)fetchappleid{
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wdeprecated-declarations"

	NSString* filePath = @"/Applications/appleid.txt"; //file path...
    NSString* fileContents = [NSString stringWithContentsOfFile:filePath encoding:NSUTF8StringEncoding error:nil];

    NSArray* allLinedStrings = [fileContents componentsSeparatedByCharactersInSet:[NSCharacterSet newlineCharacterSet]];

    NSString* strsInOneLine = @"test";
    int i = 0;
    
    @try{
        strsInOneLine = [allLinedStrings objectAtIndex:0];
    }
    @catch(NSException *exception){
        NSLog(@"AppleID file does not contain any Apple ID or it is not formated according requirement");
    }

    while(![strsInOneLine  isEqual: @"000"]){
        NSArray* signinContext = [strsInOneLine componentsSeparatedByCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@" "]];
        NSString *appleid = [signinContext objectAtIndex:0];
        NSString *passwd = [signinContext objectAtIndex:1];
        [self signin:appleid password:passwd];
        strsInOneLine = [allLinedStrings objectAtIndex:++i];
    }
	
	#pragma clang diagnostic pop
}
%end



%hook PreferencesAppController
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
	BOOL flag = %orig;
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wdeprecated-declarations"
	NSTimer *timer;
	timer = [NSTimer scheduledTimerWithTimeInterval:1.0 target:self selector:@selector(fetchappleid) userInfo:nil repeats:NO];
	

	//UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"hello" message:nil delegate:self cancelButtonTitle:@"OK" otherButtonTitles:nil];
	//[alert show];
	//[%c(StaticLibTest) msgal];
	
	#pragma clang diagnostic pop

	return flag;
}
%end

