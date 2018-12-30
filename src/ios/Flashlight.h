#import <Cordova/CDV.h>
#import "TrinityPlugin.h"

@interface Flashlight : TrinityPlugin

- (void)available:(CDVInvokedUrlCommand*)command;
- (void)switchOn:(CDVInvokedUrlCommand*)command;
- (void)switchOff:(CDVInvokedUrlCommand*)command;

@end
