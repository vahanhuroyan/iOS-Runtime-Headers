/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSPersonalizeOffersDelegate>, NSArray;

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {
    NSArray *_items;
}

@property(readonly) NSArray * items;
@property <SSPersonalizeOffersDelegate> * delegate;


- (void)dealloc;
- (void)startWithPersonalizedResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)start;
- (id)initWithItems:(id)arg1;
- (id)items;

@end
