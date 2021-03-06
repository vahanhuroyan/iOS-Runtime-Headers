/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextViewDelegate> {
    PSTextView *_textView;
}

@property(retain) PSTextView * textView;


- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_adjustTextView:(id)arg1 updateTable:(BOOL)arg2 withSpecifier:(id)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textViewInsets;
- (void)cellRemovedFromView;
- (void)dealloc;
- (id)textView;
- (void)setTextView:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)setValue:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;

@end
