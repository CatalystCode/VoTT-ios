//
//  SimulatedImageTagSession.h
//  VoTT
//
//  Created by JC Jimenez on 12/13/17.
//  Copyright © 2017 Microsoft. All rights reserved.
//

#import "MSImageTagService.h"

@interface SimulatedImageTagSession : NSObject<MSImageTagSession>

@property (nonatomic, strong) NSArray<id <MSImageTagTask>> *tasks;
@property (nonatomic, assign) NSUInteger currentTaskIndex;

@end

