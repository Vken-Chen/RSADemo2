//
//  VKRSAKey.h
//  RSADemo1
//
//  Created by vkenchen on 16/8/23.
//  Copyright © 2016年 Vkenchen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VKRSAKey : NSObject


+ (SecKeyRef)privateKeyFromPem:(NSString *)privateKey error:(NSError **)error;
+ (SecKeyRef)publicKeyFromPem:(NSString *)publicKey error:(NSError **)error;

+ (SecKeyRef)publickeyFromDer:(NSData*)data error:(NSError **)error;
@end
