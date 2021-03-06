/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoDidMakeAutoLockChoice : PBCodable <NSCopying> {
    BOOL _accept;
    struct { 
        unsigned int accept : 1; 
    } _has;
}

@property (nonatomic) BOOL accept;
@property (nonatomic) BOOL hasAccept;

- (BOOL)accept;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAccept;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAccept:(BOOL)arg1;
- (void)setHasAccept:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
