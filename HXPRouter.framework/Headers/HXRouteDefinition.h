//
//  HXRouteDefinition.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HXRouteHandler.h"

@class HXLink;
@interface HXRouteDefinition : NSObject

/*
 正则
 */
@property (nonatomic, copy, readonly) NSString *pattern;

/*
 优先级
 */
@property (nonatomic, assign, readonly) NSUInteger priority;

/*
 响应回调， 与'handler'无法共存
 */
@property (nonatomic, copy, readonly) void (^handlerBlock)(HXLink *deepLink);

/*
 处理类，与'handlerBlock'无法共存
 */
@property (nonatomic, strong, readonly) HXRouteHandler *handler;

- (HXLink *)deepLinkWithURL:(NSURL *)url;

+(instancetype)routeWithPattern:(NSString *)pattern handlerBlock:(void (^)(HXLink *deepLink))handlerBlock;

+(instancetype)routeWithPattern:(NSString *)pattern priority:(NSUInteger)priority handlerBlock:(void (^)(HXLink *deepLink))handlerBlock;

+(instancetype)routeWithPattern:(NSString *)pattern priority:(NSUInteger)priority handler:(HXRouteHandler *)handler;

+(instancetype)routeWithPattern:(NSString *)pattern handler:(HXRouteHandler *)handler;

@end
