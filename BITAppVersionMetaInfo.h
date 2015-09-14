/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSString, NSDate, NSDictionary;

@interface BITAppVersionMetaInfo : XXUnknownSuperclass {
	NSString* _name;
	NSString* _version;
	NSString* _shortVersion;
	NSString* _minOSVersion;
	NSString* _notes;
	NSDate* _date;
	NSNumber* _size;
	NSNumber* _mandatory;
	NSNumber* _versionID;
	NSDictionary* _uuids;
}
@property(copy, nonatomic) NSDictionary* uuids;
@property(copy, nonatomic) NSNumber* versionID;
@property(copy, nonatomic) NSNumber* mandatory;
@property(copy, nonatomic) NSNumber* size;
@property(copy, nonatomic) NSDate* date;
@property(copy, nonatomic) NSString* notes;
@property(copy, nonatomic) NSString* minOSVersion;
@property(copy, nonatomic) NSString* shortVersion;
@property(copy, nonatomic) NSString* version;
@property(copy, nonatomic) NSString* name;
+(id)appVersionMetaInfoFromDict:(id)dict;
-(void).cxx_destruct;
-(BOOL)hasUUID:(id)uuid;
-(BOOL)isValid;
-(id)notesOrEmptyString;
-(void)setDateWithTimestamp:(double)timestamp;
-(id)sizeInMB;
-(id)dateString;
-(id)versionString;
-(id)nameAndVersionString;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqualToAppVersionMetaInfo:(id)appVersionMetaInfo;
-(BOOL)isEqualComparingDictionary:(id)dictionary withDate:(id)date;
-(BOOL)isEqualComparingDate:(id)date withDate:(id)date2;
-(BOOL)isEqualComparingNumber:(id)number withNumber:(id)number2;
-(BOOL)isEqualComparingString:(id)string withString:(id)string2;
-(BOOL)isEqual:(id)equal;
@end
