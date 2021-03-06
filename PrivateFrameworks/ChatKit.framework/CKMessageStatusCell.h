/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UILabel;

@interface CKMessageStatusCell : CKTranscriptCell  {
    UILabel *_label;
    UILabel *_timestampLabel;
    float _outsideMargin;
}

@property float outsideMargin;


- (void)setTimestamp:(id)arg1;
- (void)dealloc;
- (void)setColor:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setText:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)outsideMargin;
- (void)setOutsideMargin:(float)arg1;

@end
