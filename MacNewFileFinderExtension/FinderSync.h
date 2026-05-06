//
//  FinderSync.h
//  MacNewFileFinderExtension
//
//  Created by Louie Yin on 2026-01-25.
//

#import <Cocoa/Cocoa.h>
#import <FinderSync/FinderSync.h>

@interface FinderSync : FIFinderSync {
    dispatch_source_t _volumeTimerSource;
}

// Store the menu kind for later use in action methods
@property (nonatomic) FIMenuKind currentMenuKind;

@end
