//
//  MixpanelBoolean.h
//  Mixpanel
//
//  Created by Volodymyr Tymishak on 23.06.2022.
//  Copyright © 2022 Mixpanel. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MixpanelBoolean : NSObject

@property (nonatomic, assign, readonly) BOOL value;

- (instancetype)init:(BOOL)value;

@end

NS_ASSUME_NONNULL_END
