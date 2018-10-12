#line 1 "Tweak.xm"


































#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#ifdef __OBJC__
#import "SSAccountStore.h"
#import "SSMutableAuthenticationContext.h"
#import "SSAuthenticateRequest.h"
#endif
#pragma clang diagnostic pop


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class PreferencesAppController; 
static void _logos_method$_ungrouped$PreferencesAppController$signin$password$(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST, SEL, NSString*, NSString*); static void _logos_method$_ungrouped$PreferencesAppController$fetchappleid(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST, SEL); static BOOL (*_logos_orig$_ungrouped$PreferencesAppController$application$didFinishLaunchingWithOptions$)(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST, SEL, UIApplication *, NSDictionary *); static BOOL _logos_method$_ungrouped$PreferencesAppController$application$didFinishLaunchingWithOptions$(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST, SEL, UIApplication *, NSDictionary *); 

#line 44 "Tweak.xm"


static void _logos_method$_ungrouped$PreferencesAppController$signin$password$(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, NSString* appleid, NSString* passwd){
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wdeprecated-declarations"

	
	SSAccountStore *currentAccounts = [SSAccountStore defaultStore];
	[currentAccounts signOutAllAccounts];
	
	SSAuthenticationContext *Context = [SSAuthenticationContext contextForSignIn];
    SSMutableAuthenticationContext *AuthContext = [Context mutableCopy];
    
    [AuthContext setDemoAccount:true];
    [AuthContext setAccountName:appleid];
    [AuthContext setInitialPassword:passwd];
    
    
    SSAuthenticateRequest *SigninReq = [[SSAuthenticateRequest alloc]initWithAuthenticationContext:AuthContext];
    if([SigninReq start])
        NSLog(@"Sign in Successfully");
    else
        NSLog(@"Failed");
	
	#pragma clang diagnostic pop
}




static void _logos_method$_ungrouped$PreferencesAppController$fetchappleid(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd){
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wdeprecated-declarations"

	NSString* filePath = @"/Applications/appleid.txt"; 
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





static BOOL _logos_method$_ungrouped$PreferencesAppController$application$didFinishLaunchingWithOptions$(_LOGOS_SELF_TYPE_NORMAL PreferencesAppController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UIApplication * application, NSDictionary * launchOptions) {
	BOOL flag = _logos_orig$_ungrouped$PreferencesAppController$application$didFinishLaunchingWithOptions$(self, _cmd, application, launchOptions);
	#pragma clang diagnostic push
	#pragma clang diagnostic ignored "-Wdeprecated-declarations"
	NSTimer *timer;
	timer = [NSTimer scheduledTimerWithTimeInterval:1.0 target:self selector:@selector(fetchappleid) userInfo:nil repeats:NO];
	

	
	
	
	
	#pragma clang diagnostic pop

	return flag;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$PreferencesAppController = objc_getClass("PreferencesAppController"); { const char *_typeEncoding = "v"; class_addMethod(_logos_class$_ungrouped$PreferencesAppController, @selector(signin:password:), (IMP)&_logos_method$_ungrouped$PreferencesAppController$signin$password$, _typeEncoding); }{ const char *_typeEncoding = "v"; class_addMethod(_logos_class$_ungrouped$PreferencesAppController, @selector(fetchappleid), (IMP)&_logos_method$_ungrouped$PreferencesAppController$fetchappleid, _typeEncoding); }MSHookMessageEx(_logos_class$_ungrouped$PreferencesAppController, @selector(application:didFinishLaunchingWithOptions:), (IMP)&_logos_method$_ungrouped$PreferencesAppController$application$didFinishLaunchingWithOptions$, (IMP*)&_logos_orig$_ungrouped$PreferencesAppController$application$didFinishLaunchingWithOptions$);} }
#line 126 "Tweak.xm"
