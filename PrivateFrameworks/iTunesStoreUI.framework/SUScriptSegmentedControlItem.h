/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, SUScriptCanvasContext, NSString;

@interface SUScriptSegmentedControlItem : SUScriptObject  {
    SUScriptCanvasContext *_canvas;
    NSString *_identifier;
    UIImage *_image;
    NSString *_imageURLString;
    NSString *_title;
    id _userInfo;
}

@property(readonly) UIImage * image;
@property(retain) SUScriptCanvasContext * canvas;
@property(retain) NSString * identifier;
@property(retain) NSString * imageURL;
@property(retain) NSString * title;
@property(retain) id userInfo;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (void)setImageURL:(id)arg1;
- (id)imageURL;
- (void)_setImage:(id)arg1;
- (id)initWithPageSection:(id)arg1;
- (id)newPageSection;
- (void)setCanvas:(id)arg1;
- (void)_reloadUserInterface;
- (id)_segmentedControl;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)identifier;
- (id)userInfo;
- (void)dealloc;
- (void)setUserInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)image;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)attributeKeys;
- (id)canvas;

@end
