//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMDBRepairCorrupt : NSObject
{
    struct sqliterk *_repair;
    struct MMDBRepairCorruptContext _context;
    NSString *_source;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)integrity;
- (unsigned int)validPageCount;
- (unsigned int)parsedPageCount;
- (unsigned int)pageCount;
- (void)dealloc;
- (void)close;
- (_Bool)repair:(id)arg1 meta:(id)arg2 error:(id *)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithSourceDatabase:(id)arg1;

@end
