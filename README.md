# About 

This tweek is able to fetch Apple IDs from certain database, and sign them in on a iOS device consecutively. (Only tested on iOS 9.3.3)

# Compile Dependency  

1. This tweek was developed on Xcode8.0 for iOS 9.3.3. 
2. Use make && make package to generate deb package.

# How to Work

1. This tweek can be activated by hooking on "PreferencesAppController" of Preferences.app(Settings.app).
2. Invaking the private APIs [SSAccountStore signOutAllAccounts], [SSAuthenticateRequest start] to achive sign out, sign in respectively.


 

