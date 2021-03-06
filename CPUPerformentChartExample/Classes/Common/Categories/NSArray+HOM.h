//
//  NSArray+HOM.h
//  CPUPerformentChartExample
//
//  Created by Nguyễn Trọng Anh Tuấn on 12/12/18.
//  Copyright © 2018 Nguyễn Trọng Anh Tuấn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (HOM)

- (NSArray *)arrayFromObjectsCollectedWithBlock:(id (^)(id object))blockConvert;

@end

NS_ASSUME_NONNULL_END
