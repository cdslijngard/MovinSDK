//
//  UrlFactory.h
//  MovinCore
//
//  Created by Movin Software on 31/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FloorPosition.h"

@interface UrlFactory : NSObject

// Setters
+(void) setCustomer:(NSString *) customer;
+(void) setHostName:(NSString *) hostName;
+(void) setMapId:(NSString *) mapId;
+(void) setApikey:(NSString *) apikey;


// Core
+(NSString *) getBaseURL;
+(NSString *) getAvailableServicesURL;

// Data
+(NSString *) getMapsUrlWithBuildings:(BOOL) buildings andEntities:(BOOL) entities;
+(NSString *) getMapUrlWithBuildings:(BOOL) buildings andEntities:(BOOL) entities;

// Positioning
+(NSString *) getPositioningUuidsURL;
+(NSString *) getPositionURL;

// Triggering
+(NSString *) getTriggerSettingsURL;

// WMTS
+(NSString *) getTileUrlWithLayer:(NSString *) layer andStyle: (NSString *) style andX:(int) x andY:(int) y andZoom:(int) zoom andFloor:(float) floor;

// Routing
+(NSString *) getRouteUrlFromPosition:(FloorPosition *) fromPos toPosition:(FloorPosition *) toPos;

// Analytics
+(NSString *) createAssetURL;
+(NSString *) createAssetPostDataWithOsVersion:(NSString *) osVersion andDeviceModel:(NSString *) model;
+(NSString *) addAssetPositionURL;
+(NSString *) addAssetPositionPostDataWithAssetId:(NSString *) assetId andPosition:(FloorPosition *) position;
+(NSString *) getAssetURLWithAssetId:(NSString *) assetId;


@end
