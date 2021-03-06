/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class WebScriptObject, NSString;

@interface SKScriptStoreSheetRequest : SUScriptObject  {
    int _pageStyle;
    WebScriptObject *_productParameters;
    NSString *_productURL;
}

@property int productPageStyle;
@property(retain) WebScriptObject * productParameters;
@property(retain) NSString * productURL;
@property(readonly) int productPageStyleAutomatic;
@property(readonly) int productPageStyleBanner;
@property(readonly) int productPageStylePad;
@property(readonly) int productPageStylePhone;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;
- (int)productPageStylePhone;
- (int)productPageStylePad;
- (int)productPageStyleBanner;
- (int)productPageStyleAutomatic;
- (id)newNativeStorePageRequest;
- (void)setProductURL:(id)arg1;
- (id)productURL;
- (void)setProductParameters:(id)arg1;
- (id)productParameters;
- (int)productPageStyle;
- (void)setProductPageStyle:(int)arg1;
- (id)attributeKeys;

@end
