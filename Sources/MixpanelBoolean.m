//
//  MixpanelBoolean.m
//  Mixpanel
//
//  Created by Volodymyr Tymishak on 23.06.2022.
//  Copyright © 2022 Mixpanel. All rights reserved.
//

#import "MixpanelBoolean.h"

@implementation MixpanelBoolean

- (instancetype)init:(BOOL)value {
    self = [super init];
    if (self) {
        _value = value;
    }
    return self;
}

@end
