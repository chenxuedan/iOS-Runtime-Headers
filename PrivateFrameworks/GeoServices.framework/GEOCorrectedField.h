/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOCorrectedField : PBCodable  {
    NSString *_correctedValue;
    NSString *_displayName;
    NSString *_objectName;
}

@property(retain) NSString * displayName;
@property(readonly) BOOL hasObjectName;
@property(retain) NSString * objectName;
@property(readonly) BOOL hasCorrectedValue;
@property(retain) NSString * correctedValue;


- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)displayName;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)correctedValue;
- (BOOL)hasCorrectedValue;
- (id)objectName;
- (BOOL)hasObjectName;
- (void)setCorrectedValue:(id)arg1;
- (void)setObjectName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end