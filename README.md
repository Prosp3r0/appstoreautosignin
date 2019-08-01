# About 

This tweek works for batch sign in Apple IDs on a iOS device. (Only tested on jailbreaked iOS 9.3.3)

# Compile Dependency  

1. This tweek was developed on Xcode8.0 for iOS 9.3.3. 
2. Use make && make package to generate deb package.

# How to Work

1. This tweek can be activated by hooking on "PreferencesAppController" of Preferences.app(Settings.app).
2. Invaking the private APIs [SSAccountStore signOutAllAccounts] and [SSAuthenticateRequest start] to achive sign out and sign in respectively.


 

