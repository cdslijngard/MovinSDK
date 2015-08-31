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

@interface MovinSDK : NSObject

// Initialization
+(void) initWithCustomer:(NSString *) customer
               andApikey:(NSString *) apikey
             andCallback:(void(^)(BOOL success, NSError* error)) callback;

+(void) initWithCustomer:(NSString *)customer
               andApikey:(NSString *)apikey
                andMapId:(NSString *)mapId
             andCallback:(void (^)(BOOL, NSError *))callback;

// Constructors
+(MovinTriggerEngine *) createTriggerEngine:(NSError **) error;
+(MovinPositioningEngine *) createPositioningEngine:(NSError **) error;

// Setter
+(void) setMapId:(NSString *) mapId;

@end