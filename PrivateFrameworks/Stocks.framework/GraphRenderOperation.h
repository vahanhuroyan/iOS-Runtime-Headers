/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSArray, UIColor, <GraphRenderOperationDelegate>, StockGraphImageSet;

@interface GraphRenderOperation : NSObject  {
    struct CGPoint { float x1; float x2; } *points;
    NSArray *linePointCounts;
    NSArray *dottedLinePositions;
    float lineWidth;
    struct { float x1; unsigned long long x2; } *volumeBars;
    float volumeBarWidth;
    unsigned long long maxVolume;
    unsigned int volumeCount;
    <GraphRenderOperationDelegate> *delegate;
    struct CGSize { 
        float width; 
        float height; 
    } lineGraphSize;
    struct CGSize { 
        float width; 
        float height; 
    } volumeGraphSize;
    StockGraphImageSet *graphImageSet;
    BOOL detailedMode;
    BOOL letterPress;
    BOOL roundLineCaps;
    UIColor *axisColor;
    UIColor *lineColor;
    UIColor *backgroundLinesColor;
    UIColor *shadowLineColor;
    BOOL _cancelled;
}

@property(getter=isCancelled,readonly) BOOL cancelled;
@property struct CGPoint { float x1; float x2; }* points;
@property(retain) NSArray * linePointCounts;
@property(retain) NSArray * dottedLinePositions;
@property float lineWidth;
@property struct { float x1; unsigned long long x2; }* volumeBars;
@property float volumeBarWidth;
@property unsigned long long maxVolume;
@property unsigned int volumeCount;
@property <GraphRenderOperationDelegate> * delegate;
@property struct CGSize { float x1; float x2; } lineGraphSize;
@property struct CGSize { float x1; float x2; } volumeGraphSize;
@property(retain) StockGraphImageSet * graphImageSet;
@property BOOL detailedMode;
@property BOOL letterPress;
@property BOOL roundLineCaps;
@property(retain) UIColor * axisColor;
@property(retain) UIColor * lineColor;
@property(retain) UIColor * backgroundLinesColor;
@property(retain) UIColor * shadowLineColor;

+ (struct CGGradient { }*)LineBackgroundGradient;

- (void)setPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)render;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)cancel;
- (id)init;
- (void)setLineWidth:(float)arg1;
- (float)lineWidth;
- (void)setRoundLineCaps:(BOOL)arg1;
- (BOOL)roundLineCaps;
- (void)setShadowLineColor:(id)arg1;
- (id)shadowLineColor;
- (void)setBackgroundLinesColor:(id)arg1;
- (id)backgroundLinesColor;
- (id)axisColor;
- (void)setLetterPress:(BOOL)arg1;
- (BOOL)letterPress;
- (struct CGSize { float x1; float x2; })volumeGraphSize;
- (struct CGSize { float x1; float x2; })lineGraphSize;
- (unsigned int)volumeCount;
- (unsigned long long)maxVolume;
- (float)volumeBarWidth;
- (struct { float x1; unsigned long long x2; }*)volumeBars;
- (id)linePointCounts;
- (void)renderGraphLineInContext:(struct CGContext { }*)arg1 withColor:(id)arg2 offset:(struct CGPoint { float x1; float x2; })arg3;
- (void)_deliverDelegateCallback;
- (void)renderVolumeGraph;
- (void)renderLineGraph;
- (BOOL)detailedMode;
- (id)dottedLinePositions;
- (id)graphImageSet;
- (void)setVolumeGraphSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLineGraphSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAxisColor:(id)arg1;
- (void)setDetailedMode:(BOOL)arg1;
- (void)setMaxVolume:(unsigned long long)arg1;
- (void)setVolumeBarWidth:(float)arg1;
- (void)setVolumeCount:(unsigned int)arg1;
- (void)setVolumeBars:(struct { float x1; unsigned long long x2; }*)arg1;
- (void)setDottedLinePositions:(id)arg1;
- (void)setLinePointCounts:(id)arg1;
- (void)setGraphImageSet:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (struct CGPoint { float x1; float x2; }*)points;

@end
