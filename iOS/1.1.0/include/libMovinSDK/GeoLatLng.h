//
//  GeoLatLng.h
//  MovinCore
//
//  Created by Movin Software on 26/03/15.
//  Copyright (c) 2015 Movin Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GeoLatLng : NSObject <NSCopying>

@property double lat;
@property double lng;

-(NSArray *) toJSON;

+(id) fromJson:(NSArray*) jsonData;

@end
