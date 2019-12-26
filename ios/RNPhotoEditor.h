
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import <UIKit/UIKit.h>
#import <CLImageEditor/CLImageEditor.h>

@interface RNPhotoEditor : NSObject <RCTBridgeModule, CLImageEditorDelegate>

@end
