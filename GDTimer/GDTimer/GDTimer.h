//
//  GDTimer.h
//  Demo_single
//
//  Created by Dubai on 2019/2/20.
//  Copyright © 2019 hhbu. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface GDTimer : NSObject

/**
 初始化加开始
 @param timeNum 循环时间
 @param block 循环方法
 */
- (void)startTimerWithSpace:(float)timeNum block:(void(^)(BOOL))block;


/**
 恢复
 */
- (void)resume;

/**
 暂停
 */
- (void)suspend;


/**
 关闭
 */
- (void)close;


@end

