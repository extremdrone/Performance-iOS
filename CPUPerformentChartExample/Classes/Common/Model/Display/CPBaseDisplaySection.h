//
//  CPBaseDisplaySection.h
//  CPUPerformentChartExample
//
//  Created by Nguyễn Trọng Anh Tuấn on 12/17/18.
//  Copyright © 2018 Nguyễn Trọng Anh Tuấn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class CPBaseDisplayItem;

@interface CPBaseDisplaySection : NSObject

@property (nonatomic, readonly, copy) NSArray<CPBaseDisplayItem *> *items;

+ (instancetype)displaySectionWithItems:(NSArray<CPBaseDisplayItem *> *)items;

@end

NS_ASSUME_NONNULL_END
