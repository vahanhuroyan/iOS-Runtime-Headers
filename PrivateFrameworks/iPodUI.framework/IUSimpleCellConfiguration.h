/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString, UIImage;

@interface IUSimpleCellConfiguration : IUArrayCellConfiguration  {
    int _imagePosition;
    int _preset;
}

@property int preset;
@property(retain) UIImage * highlightedImage;
@property(retain) UIImage * image;
@property(retain) NSString * title;

+ (float)rowHeightForGlobalContext:(id)arg1;

- (void)reloadLayoutInformation;
- (void)reloadImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)init;
- (void)setHighlightedImage:(id)arg1;
- (id)highlightedImage;
- (id)image;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (int)imagePosition;
- (id)initWithPreset:(int)arg1;
- (void)setImagePosition:(int)arg1;
- (void)setPreset:(int)arg1;
- (int)preset;
- (BOOL)showsUntruncationCallout;
- (void)reloadStringsWithProperties:(id)arg1;

@end
