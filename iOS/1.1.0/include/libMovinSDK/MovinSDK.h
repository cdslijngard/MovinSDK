//
//  MovinSDK.m
//  MovinSDK
//
//  Created by Movin Software on 26/04/15.
//  Copyright (c) 2015 Movin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GeoLatLng.h"
#import "FloorPosition.h"
#import "MovinTrigger.h"
#import "MovinPositioning.h"
#import "UrlFactory.h"
#import "HTTPRequest.h"
#import "MovinRoutingManager.h"

typedef enum {
    mPositioning = 1,
    mTurnByTurn = 2,
    mProximity = 3,
    mTrigger = 4,
    mUndefined = 5,
    mRouting = 6
} MovinService;

@interface MovinSDK : NSObject

+(void) initWithCustomer:(NSString *)customer
               andApikey:(NSString *)apikey
                andMapId:(NSString *)mapId
             andCallback:(void (^)(BOOL, NSError *))callback;

// Constructors
+(MovinTriggerEngine *) createTriggerEngine:(NSError **) error;
+(MovinPositioningEngine *) createPositioningEngine:(NSError **) error;
+(MovinRoutingManager *) createRoutingManager:(NSError **) error;

// Get service status
+(BOOL) getServiceSupported:(MovinService) service;

@end
