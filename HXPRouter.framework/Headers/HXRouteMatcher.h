//
//  HXRouteMatcher.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HXLink;

@interface HXRouteMatcher : NSObject

/*
 路由初始化
 
 */
+(instancetype)matcherWithPattern:(NSString *)pattern;

/*
 匹配路由的URL并返回底层链接
 */
- (HXLink *)deepLinkWithURL:(NSURL *)url;

@end
