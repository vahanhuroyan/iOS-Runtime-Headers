/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class <SCROBrailleTranslatorProtocol>, NSBundle, NSLock;

@interface SCROBrailleTranslationManager : NSObject  {
    NSLock *_contentLock;
    <SCROBrailleTranslatorProtocol> *_translator;
    NSBundle *_translatorBundle;
    BOOL _tableSupportsContractedBraille;
    BOOL _tableSupportsEightDotBraille;
    <SCROBrailleTranslatorProtocol> *_auxTranslator;
    NSBundle *_auxTranslatorBundle;
    BOOL _auxTableSupportsContractedBraille;
    BOOL _auxTableSupportsEightDotBraille;
}

@property(readonly) BOOL primaryTableSupportsContractedBraille;
@property(readonly) BOOL primaryTableSupportsEightDotBraille;
@property(readonly) BOOL auxiliaryTableSupportsContractedBraille;
@property(readonly) BOOL auxiliaryTableSupportsEightDotBraille;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedManager;

- (BOOL)auxiliaryTableSupportsEightDotBraille;
- (BOOL)auxiliaryTableSupportsContractedBraille;
- (id)textForPrintBraille:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5;
- (id)printBrailleForText:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4;
- (void)setPrimaryTranslationTableWithTableIdentifier:(id)arg1;
- (id)primaryTableIdentifier;
- (BOOL)primaryTableSupportsContractedBraille;
- (BOOL)primaryTableSupportsEightDotBraille;
- (id)textForPrintBraille:(id)arg1 contracted:(BOOL)arg2 eightDot:(BOOL)arg3 locations:(id*)arg4;
- (id)printBrailleForText:(id)arg1 primaryTable:(BOOL)arg2 contracted:(BOOL)arg3 eightDot:(BOOL)arg4 locations:(id*)arg5;
- (id)auxiliaryTableIdentifier;
- (void)setAuxiliaryTranslationTableWithTableIdentifier:(id)arg1;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (id)autorelease;

@end
