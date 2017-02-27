<?php if (!empty($title)): ?>
  <h3 class="<?php print $view_accordion_id; ?>">
    <?php print $title; ?>
  </h3>
<?php endif; ?>
<?php if ($use_group_header): ?><div><?php endif; ?>
<div class="category-header">
	<div class="file-download-header">Documento</div>
	<div class="file-filesize-header">Secci&oacute;n</div>
</div>
<?php foreach ($rows as $id => $row): ?>
  <div class="<?php print $classes_array[$id]; ?>">
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
<?php if ($use_group_header): ?></div><?php endif; ?>
