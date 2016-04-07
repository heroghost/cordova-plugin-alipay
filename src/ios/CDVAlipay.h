//
//  CDVAlipay.h
//  X5
//
//  Created by hpduan on 4/7/16.
//
//

#import <Foundation/Foundation.h>

#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

@interface CDVAlipay : CDVPlugin

#define PARTNER @""
#define RSA_PRIVATE @""
#define RSA_PUBLIC @""

@property(nonatomic,strong)NSString *partner;
@property(nonatomic,strong)NSString *rsa_private;
@property(nonatomic,strong)NSString *rsa_public;
@property(nonatomic,strong)NSString *currentCallbackId;

- (void)pay:(CDVInvokedUrlCommand*)command;
@end
