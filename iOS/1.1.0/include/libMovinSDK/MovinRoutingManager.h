//
//  MovinRoutingManager.h
//  MovinSDK
//
//  Created by Movin Software on 15/09/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FloorPosition.h"
#import "Route.h"

@interface MovinRoutingManager : NSObject

-(void) calculateRouteFrom:(FloorPosition *) fromPos to:(FloorPosition *) toPos andCallback:(void (^)(NSError *, Route *))callback;

@end
