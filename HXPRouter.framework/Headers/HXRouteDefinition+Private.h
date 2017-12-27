//
//  HXRouteDefinition+Private.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import "HXRouteDefinition.h"
#import "HXRouteMatcher.h"

@interface HXRouteDefinition ()

@property (nonatomic, copy, readwrite) NSString *pattern;

@property (nonatomic, assign, readwrite) NSUInteger priority;

@property (nonatomic, copy, readwrite) void (^handlerBlock)(HXLink *deepLink);

@property (nonatomic, strong, readwrite) HXRouteHandler *handler;

@property (nonatomic, strong, readwrite) HXRouteMatcher *matcher;

@end
