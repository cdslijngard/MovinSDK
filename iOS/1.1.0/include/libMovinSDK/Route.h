//
//  Route.h
//  MovinSDK
//
//  Created by Movin Software on 15/09/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FloorPosition.h"

@interface Route : NSObject

@property (strong, nonatomic) NSArray* path;

-(id)initWithPath:(NSArray *) path;

-(FloorPosition *) snapToRoute:(FloorPosition *) position andTreshold:(double) meter;

@end
