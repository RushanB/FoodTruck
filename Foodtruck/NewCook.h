//
//  NewCook.h
//  Foodtruck
//
//  Created by Rushan on 2017-05-04.
//  Copyright © 2017 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"
@interface NewCook : NSObject <FoodTruckDelegate>

-(double)foodTruck:(FoodTruck *)truck priceForFood:(NSString *)food;

@end
