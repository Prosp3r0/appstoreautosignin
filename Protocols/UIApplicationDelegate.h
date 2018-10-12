/* Generated by RuntimeBrowser.
 */

@protocol UIApplicationDelegate <NSObject>

@optional

- (bool)application:(void *)arg1 continueUserActivity:(void *)arg2 restorationHandler:(void *)arg3; // needs 3 arg types, found 8: UIApplication *, NSUserActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)application:(UIApplication *)arg1 didChangeStatusBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)application:(UIApplication *)arg1 didChangeStatusBarOrientation:(long long)arg2;
- (void)application:(UIApplication *)arg1 didDecodeRestorableStateWithCoder:(NSCoder *)arg2;
- (void)application:(UIApplication *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (void)application:(UIApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (bool)application:(UIApplication *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveLocalNotification:(UILocalNotification *)arg2;
- (void)application:(UIApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2;
- (void)application:(void *)arg1 didReceiveRemoteNotification:(void *)arg2 fetchCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UIApplication *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)application:(UIApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (void)application:(UIApplication *)arg1 didRegisterUserNotificationSettings:(UIUserNotificationSettings *)arg2;
- (void)application:(UIApplication *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)application:(void *)arg1 handleActionWithIdentifier:(void *)arg2 forLocalNotification:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: UIApplication *, NSString *, UILocalNotification *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)application:(void *)arg1 handleActionWithIdentifier:(void *)arg2 forLocalNotification:(void *)arg3 withResponseInfo:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: UIApplication *, NSString *, UILocalNotification *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)application:(void *)arg1 handleActionWithIdentifier:(void *)arg2 forRemoteNotification:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: UIApplication *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)application:(void *)arg1 handleActionWithIdentifier:(void *)arg2 forRemoteNotification:(void *)arg3 withResponseInfo:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: UIApplication *, NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)application:(void *)arg1 handleEventsForBackgroundURLSession:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: UIApplication *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)application:(UIApplication *)arg1 handleOpenURL:(NSURL *)arg2;
- (void)application:(void *)arg1 handleWatchKitExtensionRequest:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: UIApplication *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (void)application:(void *)arg1 performActionForShortcutItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: UIApplication *, UIApplicationShortcutItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)application:(void *)arg1 performFetchWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: UIApplication *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (bool)application:(UIApplication *)arg1 shouldAllowExtensionPointIdentifier:(NSString *)arg2;
- (bool)application:(UIApplication *)arg1 shouldRestoreApplicationState:(NSCoder *)arg2;
- (bool)application:(UIApplication *)arg1 shouldSaveApplicationState:(NSCoder *)arg2;
- (unsigned long long)application:(UIApplication *)arg1 supportedInterfaceOrientationsForWindow:(UIWindow *)arg2;
- (void)application:(UIApplication *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (UIViewController *)application:(UIApplication *)arg1 viewControllerWithRestorationIdentifierPath:(NSArray *)arg2 coder:(NSCoder *)arg3;
- (void)application:(UIApplication *)arg1 willChangeStatusBarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)application:(UIApplication *)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (bool)application:(UIApplication *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (void)application:(UIApplication *)arg1 willEncodeRestorableStateWithCoder:(NSCoder *)arg2;
- (bool)application:(UIApplication *)arg1 willFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (void)applicationDidEnterBackground:(UIApplication *)arg1;
- (void)applicationDidFinishLaunching:(UIApplication *)arg1;
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)arg1;
- (void)applicationProtectedDataDidBecomeAvailable:(UIApplication *)arg1;
- (void)applicationProtectedDataWillBecomeUnavailable:(UIApplication *)arg1;
- (void)applicationShouldRequestHealthAuthorization:(UIApplication *)arg1;
- (void)applicationSignificantTimeChange:(UIApplication *)arg1;
- (void)applicationWillEnterForeground:(UIApplication *)arg1;
- (void)applicationWillResignActive:(UIApplication *)arg1;
- (void)applicationWillTerminate:(UIApplication *)arg1;
- (void)setWindow:(UIWindow *)arg1;
- (UIWindow *)window;

@end
