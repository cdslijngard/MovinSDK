//
//  UrlFactory.h
//  MovinCore
//
//  Created by Movin Software on 31/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UrlFactory : NSObject

+(void) setCustomer:(NSString *) customer;
+(void) setHostName:(NSString *) hostName;
+(void) setMapId:(NSString *) mapId;
+(void) setApikey:(NSString *) apikey;

+(NSString *) getBaseURL;
+(NSString *) getPositionURL;
+(NSString *) getAvailableServicesURL;
+(NSString *) customerExistsURL;
+(NSString *) getPositioningUuidsURL;
+(NSString *) getTriggerSettingsURL;
+(NSString *) getTileUrlWithLayer:(NSString *) layer andStyle: (NSString *) style andX:(int) x andY:(int) y andZoom:(int) zoom andFloor:(float) floor;

+(NSString *) getMapsUrlWithBuildings:(BOOL) buildings andEntities:(BOOL) entities;
+(NSString *) getMapUrlWithBuildings:(BOOL) buildings andEntities:(BOOL) entities;

@end
