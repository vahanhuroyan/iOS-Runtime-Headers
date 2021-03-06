/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSDictionary;

@interface FTiMessageMessage : FTMessage <NSCopying> {
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber * wantsDeliveryStatus;
@property(copy) NSDictionary * deliveryStatusContext;
@property(copy) NSNumber * version;


- (void)setDeliveryStatusContext:(id)arg1;
- (id)deliveryStatusContext;
- (void)setWantsDeliveryStatus:(id)arg1;
- (id)wantsDeliveryStatus;
- (id)userAgentHeaderString;
- (BOOL)wantsUserAgentInHeaders;
- (BOOL)wantsAPSRetries;
- (BOOL)wantsHTTPHeaders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setVersion:(id)arg1;
- (id)version;
- (id)messageBody;

@end
