//
//  JJFactory.h
//  DesignPattern_FactoryMethod
//
//  Created by JieFei on 2017/7/2.
//  Copyright © 2017年 RobberJJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JJCalculate.h"
@interface JJFactory : NSObject<JJCalculate>
-(id<JJCalculate>)createFactory;
@end
