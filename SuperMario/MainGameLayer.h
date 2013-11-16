//
//  MainGameLayer.h
//  SuperMario
//
//  Created by jashon on 13-11-5.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//
#import "HudStickLayer.h"

@interface MainGameLayer : CCLayer {
    CGSize winSize;
}

- (void) reset;
@end


@interface MainGameScene : CCScene {
    HudStickLayer *hudLayer_;
    MainGameLayer *gameLayer_;
}

@property (nonatomic, retain) HudStickLayer *hudLayer;
@property (nonatomic, retain) MainGameLayer *gameLayer;

+ (id) scene;

@end