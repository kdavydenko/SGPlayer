//
//  SGGLViewport.h
//  SGPlayer
//
//  Created by Single on 2018/1/25.
//  Copyright © 2018年 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGGLDefines.h"

typedef NS_ENUM(NSUInteger, SGGLViewportMode)
{
    SGGLViewportModeResize,
    SGGLViewportModeResizeAspect,
    SGGLViewportModeResizeAspectFill,
};

@interface SGGLViewport : NSObject

+ (void)updateViewport:(SGGLSize)renderSize
           displaySize:(SGGLSize)displaySize
                  mode:(SGGLViewportMode)mode;

@end