//
//  MovinPosition.h
//  MovinCore
//
//  Created by Movin Software on 17/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GeoLatLng.h"

@interface FloorPosition : NSObject

@property GeoLatLng* position;
@property double floor;

-(id) initWithGeoLatLng:(GeoLatLng *) position
               andFloor: (double) floor;

-(NSDictionary*) toJSON;

+(id) fromJson:(NSDictionary*) jsonData;

@end
