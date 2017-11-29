//
//  VLCLogging.m
//  MobileVLCKit
//
//  Created by Alex Pawlowski on 11/29/17.
//

#import "VLCLogging.h"

@implementation VLCLogging

static VKLogger logger = nil;

+ (VKLogger)logger
{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        logger = ^(VKLogLevel _, NSString *message) {
            NSLog(@"%@", message);
        };
    });
    return logger;
}

+ (void)setLogger:(VKLogger)_logger
{
    logger = _logger;
}

@end
