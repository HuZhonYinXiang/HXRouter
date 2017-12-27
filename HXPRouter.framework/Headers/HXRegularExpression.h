//
//  HXDLRegularExpression.h
//  HXRoute
//
//  Created by 胡欣 on 2017/12/19.
//  Copyright © 2017年 胡欣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HXMatchResult.h"

@interface HXRegularExpression : NSRegularExpression

@property (nonatomic, strong) NSArray *groupNames;

+(instancetype)regularExpressionWithPattern:(NSString *)pattern;

- (HXMatchResult *)matchResultForString:(NSString *)str;

@end
