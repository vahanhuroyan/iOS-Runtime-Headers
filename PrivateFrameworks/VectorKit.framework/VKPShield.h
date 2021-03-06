/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPGenericShieldStyleInfo, NSMutableArray;

@interface VKPShield : PBCodable  {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _identifiers;
    VKPGenericShieldStyleInfo *_genericShieldStyleInfo;
    NSMutableArray *_variants;
}

@property(readonly) unsigned int identifiersCount;
@property(readonly) int* identifiers;
@property(retain) NSMutableArray * variants;
@property(readonly) BOOL hasGenericShieldStyleInfo;
@property(retain) VKPGenericShieldStyleInfo * genericShieldStyleInfo;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)addIdentifier:(int)arg1;
- (id)dictionaryRepresentation;
- (void)setIdentifiers:(int*)arg1 count:(unsigned int)arg2;
- (int*)identifiers;
- (id)variantsAtIndex:(unsigned int)arg1;
- (void)clearVariants;
- (unsigned int)variantsCount;
- (void)clearIdentifiers;
- (void)addVariants:(id)arg1;
- (void)setGenericShieldStyleInfo:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)genericShieldStyleInfo;
- (BOOL)hasGenericShieldStyleInfo;
- (id)variants;
- (int)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)identifiersCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end
