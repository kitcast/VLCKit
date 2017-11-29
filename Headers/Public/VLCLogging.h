//
//  VLCLogging.h
//  MobileVLCKit
//
//  Created by Alex Pawlowski on 11/29/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, VKLogLevel) {
    VKLogLevelInfo = 0,
    VKLogLevelError = 1,
    VKLogLevelWarning = 2,
    VKLogLevelDebug = 3,
};

typedef void(^VKLogger)(VKLogLevel, NSString *);

/**
 * Provides an object to define VLC logging.
 */
@interface VLCLogging: NSObject

/**
 * Global logging function
 */
@property (class, readwrite, nonatomic) VKLogger logger;

@end

NS_ASSUME_NONNULL_END
