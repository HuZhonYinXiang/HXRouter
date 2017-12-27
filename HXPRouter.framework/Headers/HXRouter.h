//
//  HXRoute.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HXDefines.h"

@class HXRouteDefinition;
@class HXLink;
@class UIViewController;
@class HXRouter;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN NSString * const HXRouteTargetViewControllerKey;

typedef void(^HXRouteHandlerBlock)(HXLink *deepLink);

typedef void(^HXRouteCompletionBlock)(NSDictionary * _Nullable response, NSError * _Nullable error);


@protocol HXRouteDelegate<NSObject>

@required
- (UIViewController *)router:(HXRouter *)router sourceWithDeepLink:(HXLink *)deepLink;

@optional
/*
 权限控制
 */
- (BOOL)router:(HXRouter *)router canHandleURL:(NSURL *)url;
/*
 重定向
 */
- (NSURL *)router:(HXRouter *)router redirectURLWithURL:(NSURL *)url;

- (void)router:(HXRouter *)router unmatchedURLHandler:(NSURL *)url;

@end

@interface HXRouter : NSObject

/*
 路由代理
 */
@property (nonatomic, weak) id<HXRouteDelegate> delegate;

/*
 获取单例
 */
+(instancetype)shareHXRouter;

/*
 添加路由地址实现
 */
- (void)addRoute:(HXRouteDefinition *)route;

/*
 获取对应地址的控制器
 */
- (UIViewController *)matchURL:(NSURL *)url error:(NSError *__autoreleasing *)error;

@end

@interface HXRouter(NSURL)

- (BOOL)handleURL:(NSURL *)url
       withSource:(nullable UIViewController *)sourceViewController
       parameters:(nullable NSDictionary<NSString *,id>*)parameters
       completion:(nullable HXRouteCompletionBlock)completionHandler;

- (BOOL)handleURL:(NSURL *)url
       withSource:(nullable UIViewController *)sourceViewController
       parameters:(nullable NSDictionary<NSString *,id>*)parameters;

- (BOOL)handleURL:(NSURL *)url
       withSource:(nullable UIViewController *)sourceViewController;

@end

@interface HXRouter(NSUserActivity)

- (BOOL)handleActivity:(NSUserActivity *)userActivity
            withSource:(nullable UIViewController *)sourceViewController
            parameters:(nullable NSDictionary<NSString *,id>*)parameters
            completion:(nullable HXRouteCompletionBlock)completionHandler;

@end

NS_ASSUME_NONNULL_END
