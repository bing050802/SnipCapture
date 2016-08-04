//
//  SnipWindowController.h
//  Snip
//
//  Created by rz on 15/1/31.
//  Copyright (c) 2015年 liyue. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Foundation/Foundation.h>
#import "MouseEventProtocol.h"

@interface SnipWindowController : NSWindowController <NSWindowDelegate, MouseEventProtocol>

- (void)startCaptureWithScreen:(NSScreen *)screen;

@end
