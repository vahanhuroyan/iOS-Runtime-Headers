/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, <_UIQueueingServiceWebViewControllerProxyDelegate>;

@interface _UIQueueingServiceWebViewControllerProxy : NSObject  {
    NSMutableArray *_queuedInvocations;
    id _serviceViewControllerProxy;
    <_UIQueueingServiceWebViewControllerProxyDelegate> *_delegate;
}

@property(retain) id serviceViewControllerProxy;
@property <_UIQueueingServiceWebViewControllerProxyDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (void)setServiceViewControllerProxy:(id)arg1;
- (id)serviceViewControllerProxy;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
