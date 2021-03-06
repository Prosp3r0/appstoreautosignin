/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */
#import "SSAuthenticationContext.h"

@interface SSMutableAuthenticationContext : SSAuthenticationContext <NSCopying, NSMutableCopying, SSXPCCoding>

@property (nonatomic, copy) NSDictionary *HTTPHeaders;
@property (nonatomic, copy) NSString *accountName;
@property (getter=isAccountNameEditable, nonatomic) BOOL accountNameEditable;
@property int accountScope;
@property (nonatomic) BOOL allowsBioAuthentication;
@property (nonatomic) BOOL allowsBootstrapCellularData;
@property (nonatomic) BOOL allowsRetry;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic) BOOL canCreateNewAccount;
@property (nonatomic) BOOL canSetActiveAccount;
@property (nonatomic, copy) NSString *cancelButtonLabel;
@property (nonatomic, copy) NSString *clientIdentifierHeader;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDemoAccount, nonatomic) BOOL demoAccount;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysOnLockScreen;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *initialPassword;
@property (nonatomic, copy) NSString *okButtonLabel;
@property (nonatomic) BOOL persistsAcrossDeviceLock;
@property (nonatomic) BOOL persistsPasswordFallback;
@property (nonatomic, copy) NSString *preferredITunesStoreClient;
@property (nonatomic) int promptStyle;
@property (nonatomic, copy) NSString *promptTitle;
@property (nonatomic, copy) NSString *reasonDescription;
@property (nonatomic, copy) NSDictionary *requestParameters;
@property (nonatomic, retain) NSNumber *requiredUniqueIdentifier;
@property (nonatomic) BOOL shouldCreateNewSession;
@property (nonatomic) BOOL shouldFollowAccountButtons;
@property (nonatomic) BOOL shouldIgnoreProtocol;
@property (nonatomic) BOOL shouldSuppressDialogs;
@property (nonatomic, copy) NSDictionary *signupRequestParameters;
@property (readonly) Class superclass;
@property (nonatomic) int tokenType;
@property (nonatomic, copy) NSArray *userAgentComponents;

- (id)init; //add
- (id)copyWithZone:(id)arg1;
- (id)mutableCopyWithZone:(id)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountNameEditable:(BOOL)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setAllowsBioAuthentication:(BOOL)arg1;
- (void)setAllowsBootstrapCellularData:(BOOL)arg1;
- (void)setAllowsRetry:(BOOL)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setCanCreateNewAccount:(BOOL)arg1;
- (void)setCanSetActiveAccount:(BOOL)arg1;
- (void)setCancelButtonLabel:(id)arg1;
- (void)setClientIdentifierHeader:(id)arg1;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setDisplaysOnLockScreen:(BOOL)arg1;
- (void)setHTTPHeaders:(id)arg1;
- (void)setInitialPassword:(id)arg1;
- (void)setOkButtonLabel:(id)arg1;
- (void)setPersistsAcrossDeviceLock:(BOOL)arg1;
- (void)setPersistsPasswordFallback:(BOOL)arg1;
- (void)setPreferredITunesStoreClient:(id)arg1;
- (void)setPromptStyle:(int)arg1;
- (void)setPromptTitle:(id)arg1;
- (void)setReasonDescription:(id)arg1;
- (void)setRequestParameters:(id)arg1;
- (void)setRequiredUniqueIdentifier:(id)arg1;
- (void)setShouldCreateNewSession:(BOOL)arg1;
- (void)setShouldFollowAccountButtons:(BOOL)arg1;
- (void)setShouldIgnoreProtocol:(BOOL)arg1;
- (void)setShouldSuppressDialogs:(BOOL)arg1;
- (void)setSignupRequestParameters:(id)arg1;
- (void)setTokenType:(int)arg1;
- (void)setUserAgentComponents:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValuesWithAccount:(id)arg1;

@end
