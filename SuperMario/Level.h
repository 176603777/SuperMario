//
//  Level.h
//  SuperMario
//
//  Created by jashon on 13-11-7.
//  Copyright (c) 2013年 __Panda-K__. All rights reserved.
//

@interface Level : NSObject {
    CCTMXTiledMap *m_bg;
}
@property (nonatomic, retain) CCTMXTiledMap *p_bg;

- (Level *) initWithLevelNum:(int) num;
@end
