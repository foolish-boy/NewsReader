//
//  BaseInfo.h
//  NewsReader
//
//  Created by jasonwu on 7/7/16.
//  Copyright © 2016 jasonwu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseInfo : NSObject

@property (nonatomic, strong) NSString  *ID;
@property (nonatomic, strong) NSString  *name;

+ (instancetype)infoFromDict:(NSDictionary *)dict;
+ (NSArray *)arrayFromDict:(NSDictionary *)dict;
+ (NSArray *)arrayFromArray:(NSArray *)array;

@end
